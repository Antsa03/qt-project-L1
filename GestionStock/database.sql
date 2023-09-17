-- Active: 1668449510506@@127.0.0.1@3306@gestion_stock
CREATE DATABASE gestion_stock;
CREATE TABLE produit (
    NumProduit VARCHAR(255) NOT NULL,
    Design VARCHAR(255) NULL,
    Stock INT NULL,
    PRIMARY KEY (NumProduit)
);

CREATE TABLE BonEntree (
    NumBonEntree VARCHAR(255) NOT NULL,
    DateEntree DATE NOT NULL,
    PRIMARY KEY (NumBonEntree)
);

CREATE TABLE gestion_stock.BonSortie (
    NumBonSortie VARCHAR(255) NOT NULL,
    DateSortie DATE,
    PRIMARY KEY (NumBonSortie)
);

CREATE TABLE Sortie (
    NumProduit VARCHAR (255) NOT NULL,
    NumBonSortie VARCHAR (255) NOT NULL,
    QteSortie INT NOT NULL,
    FOREIGN KEY (NumProduit) REFERENCES produit(NumProduit),
    FOREIGN KEY (NumBonSortie) REFERENCES BonSortie(NumBonSortie)
);

CREATE TABLE Entree(
    NumProduit VARCHAR (255) NOT NULL,
    NumBonEntree VARCHAR (255) NOT NULL,
    QteEntree INT NOT NULL,
    FOREIGN KEY (NumProduit) REFERENCES produit(NumProduit),
    FOREIGN KEY (NumBonEntree) REFERENCES BonEntree(NumBonEntree)
);

