---------------------
-- CRIA TABLESPACE --
---------------------

CREATE TABLESPACE  TS_DB_2019
DATAFILE  'C:\BD\ts_db_2019.dbf' SIZE 1M
AUTOEXTEND ON;

------------------
-- CRIA USUÁRIO --
------------------

CREATE USER USER_VENDA
IDENTIFIED BY aluno
DEFAULT TABLESPACE ts_db_2019
TEMPORARY TABLESPACE TEMP
QUOTA UNLIMITED ON ts_db_2019;

-----------------
-- PRIVILÉGIOS --
-----------------

GRANT DBA TO USER_VENDA WITH ADMIN OPTION;
