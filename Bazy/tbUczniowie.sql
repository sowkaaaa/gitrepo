CREATE TABLE tbUczniowie (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    imie TEXT,
    nazwisko TEXT,
    plec INTEGER,
    data_ur DATE,
    awatar BLOB,
    egzamin INTEGER,
    srednia_ocen DECIMAL,
    uwagi TEXT
);

CREATE TABLE tbOddziały (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT ,
    oznaczenie TEXT,
    rok_naboru TEXT,
    rok_matury TEXT
);
