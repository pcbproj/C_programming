#include <stdio.h>
#include <string.h>

#define FILE_NAME	"settings.cfg"
#define MAX_SETTINGS 100
#define MAX_KEY_LEN 50
#define MAX_VALUE_LEN 100

// Структура для хранения одной настройки
typedef struct {
    char key[MAX_KEY_LEN];
    char value[MAX_VALUE_LEN];
} Setting;


/**
 * @brief Читает все настройки из файла в формате "ключ=значение"
 *
 * @param filename Путь к файлу конфигурации для чтения
 * @param settings Массив структур Setting для заполнения (должен иметь размер >= MAX_SETTINGS)
 * @param num_settings Указатель на переменную, куда будет записано количество прочитанных настроек
 *
 * @return int 0 при успешном чтении,
 *            -1 при ошибке открытия файла
 */
int read_settings(const char *filename, Setting settings[], int *num_settings) {
    FILE *file = fopen(filename, "r");
    if (!file) return -1;

    *num_settings = 0;
    while ((*num_settings < MAX_SETTINGS) &&
           fscanf(file, "%49[^=]=%99[^\n]\n", settings[*num_settings].key, settings[*num_settings].value) == 2) {
        (*num_settings)++;
    }

    fclose(file);
    return 0;
}


/**
 * @brief Записывает массив настроек в файл в формате "ключ=значение"
 *
 * @param filename Имя файла для записи (если файл существует, он будет перезаписан)
 * @param settings Массив структур Setting с настройками для записи
 * @param num_settings Количество элементов в массиве settings
 *
 * @return int 0 в случае успешной записи, -1 при ошибке открытия файла
 */
int write_settings(const char *filename, Setting settings[], int num_settings) {
    FILE *file = fopen(filename, "w");
    if (!file) return -1; // В случае ошибки открытия файла

    for (int i = 0; i < num_settings; i++) {
        fprintf(file, "%s=%s\n", settings[i].key, settings[i].value);
    }

    fclose(file); // Успешная запись
    return 0;
}


/**
 * @brief Получает значение конкретной настройки по ключу из файла конфигурации
 *
 * @param filename Путь к файлу конфигурации в формате "ключ=значение"
 * @param key Искомый ключ настройки (регистрозависимый)
 * @param value_out Буфер для записи найденного значения (должен иметь размер MAX_VALUE_LEN)
 *
 * @return int 0 если настройка найдена и скопирована,
 *            -1 если произошла ошибка чтения файла или ключ не найден
 */
int get_setting(const char *filename, const char *key, char *value_out) {
    Setting settings[MAX_SETTINGS];
    int num_settings = 0;

    if (read_settings(filename, settings, &num_settings) != 0) {
        return -1; // В случае ошибки чтения файла
    }

    for (int i = 0; i < num_settings; i++) {
        if (strcmp(settings[i].key, key) == 0) {
            strncpy(value_out, settings[i].value, MAX_VALUE_LEN);
            return 0; // Найдено и скопировано значение
        }
    }

    return -1; // Не найдено
}


/**
 * @brief Устанавливает, обновляет или добавляет конкретную настройку в файл конфигурации
 *
 * @param filename Путь к файлу конфигурации для изменения
 * @param key Ключ настройки для добавления/обновления (регистрозависимый)
 * @param value Значение настройки для установки
 *
 * @return int 0 при успешной записи,
 *            -1 при ошибке чтения/записи файла,
 *            -2 при переполнении (попытка добавить сверх MAX_SETTINGS)
 */
int set_setting(const char *filename, const char *key, const char *value) {
    Setting settings[MAX_SETTINGS];
    int num_settings = 0;
    int found = 0;

    if (read_settings(filename, settings, &num_settings) != 0) {
		return -1; // В случае ошибки чтения файла
	}

    // Проверяем, есть ли ключ уже
    for (int i = 0; i < num_settings; i++) {
        if (strcmp(settings[i].key, key) == 0) {
            strncpy(settings[i].value, value, MAX_VALUE_LEN);
            found = 1;
            break;
        }
    }

    // Если ключ не найден, добавляем новый (если есть место)
    if (!found && num_settings < MAX_SETTINGS) {
        strncpy(settings[num_settings].key, key, MAX_KEY_LEN);
        strncpy(settings[num_settings].value, value, MAX_VALUE_LEN);
        num_settings++;
    }

    return write_settings(filename, settings, num_settings);
}


int main() {
	char value[MAX_VALUE_LEN];

//	if (get_setting(FILE_NAME, "theme", value) == 0) {
//		printf("%s\n", value);
//	} else printf("Setting not found!\n");
//
//	if (get_setting(FILE_NAME, "password", value) == 0) {
//		printf("%s\n", value);
//	} else printf("Setting not found!\n");
//
//	if (get_setting(FILE_NAME, "temperature", value) == 0) {
//		printf("%s\n", value);
//	} else printf("Setting not found!\n");

//	if (set_setting(FILE_NAME, "theme", "light") == 0) {
//		printf("Параметр успешно установлен!\n");
//	} else {
//		printf("Ошибка записи параметра\n");
//	}

	if (set_setting(FILE_NAME, "calibration", "0.874") == 0) {
		printf("Параметр успешно установлен!\n");
	} else {
		printf("Ошибка записи параметра\n");
	}

    return 0;
}

