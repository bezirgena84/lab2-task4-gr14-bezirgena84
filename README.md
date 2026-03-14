## Overview
Репозиторий содержит результат выполнения **Задания 4** лабораторной работы №2.
Реализовано консольное приложение на C с использованием структур данных.

## Features
- Структуры `StudentData` и `StudentAddress` для хранения информации
- Сборка проекта через Makefile с подробными комментариями
- Автоматическая сборка и тестирование через GitHub Actions
- Игнорирование сгенерированных файлов через .gitignore

## Usage
```bash
# Сборка проекта
make

# Запуск программы
./program

# Очистка сгенерированных файлов
make clean
```

## Building
Проект использует Makefile для автоматизации сборки:
```bash
make          # собрать проект
make clean    # удалить сгенерированные файлы
```

## GitHub Actions
Автоматическая сборка настроена через workflow `.github/workflows/ci.yml`

## Additional Notes
Репозиторий Задания 1:  
https://github.com/ivanov/lab2-task1-gr16-ivanov

Репозиторий Задания 3:  
https://github.com/fpmi-tp2022/labrabota3-z4-gr16-ivanov

[Отчет](/docs)
