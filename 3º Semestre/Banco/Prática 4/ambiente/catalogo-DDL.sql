DROP TABLE AUTOR_MUSICA;
DROP TABLE AUTOR;
DROP TABLE FAIXA;
DROP TABLE CD;
DROP TABLE GRAVADORA;
DROP TABLE MUSICA;
DROP TABLE CD_CATEGORIA; 

CREATE TABLE AUTOR (
       aut_codigo           NUMBER primary key,
       aut_nome             VARCHAR(60) NOT NULL
);

CREATE TABLE GRAVADORA (
       grav_codigo          NUMBER PRIMARY KEY,
       grav_nome            VARCHAR(60) NOT NULL,
       grav_endereco        VARCHAR(60) NOT NULL,
       grav_telefone        VARCHAR(20) NOT NULL,
       grav_contato         VARCHAR(20) NOT NULL,
       grav_endsite         VARCHAR(80) NOT NULL
);

CREATE TABLE CD (
       cd_codigo            NUMBER primary key,
       cd_nome              VARCHAR(60) NOT NULL,
       cd_preco_venda       NUMBER(14,2) NOT NULL,
       cd_data_lancamento   DATE NULL,
       grav_codigo          NUMBER,
       cd_indicado          NUMBER
);

ALTER TABLE CD
       ADD  ( FOREIGN KEY (cd_indicado)
                             REFERENCES CD(cd_codigo) ) ;


ALTER TABLE CD
       ADD  ( FOREIGN KEY (grav_codigo)
                             REFERENCES GRAVADORA(grav_codigo) ) ;


CREATE TABLE CD_CATEGORIA (
       cat_codigo           NUMBER PRIMARY KEY,
       menor_preco          NUMBER(14,2) NOT NULL,
       maior_preco          NUMBER(14,2) NOT NULL
);

CREATE TABLE MUSICA (
       mus_codigo           NUMBER primary key,
       mus_nome             VARCHAR(60) NOT NULL,
       mus_duracao          NUMBER(6,2) NOT NULL
);

CREATE TABLE FAIXA (
       cd_codigo            NUMBER,
       mus_codigo           NUMBER,
       faixa_numero         NUMBER,
       PRIMARY KEY (cd_codigo, mus_codigo),
       FOREIGN KEY (cd_codigo) references CD (cd_codigo),
       FOREIGN KEY (mus_codigo) references musica (mus_codigo)
);

CREATE TABLE AUTOR_MUSICA (
       aut_codigo            NUMBER,
       mus_codigo           NUMBER,
        PRIMARY KEY (aut_codigo, mus_codigo)

);



ALTER TABLE autor_musica
       ADD  ( FOREIGN KEY (aut_codigo)
                             REFERENCES AUTOR (aut_codigo) ) ;


ALTER TABLE AUTOR_MUSICA
       ADD  ( FOREIGN KEY (mus_codigo)
                             REFERENCES musica(mus_codigo) ) ;



