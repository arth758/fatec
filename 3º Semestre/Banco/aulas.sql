/*
CREATE TABLE produto (
    pro_codigo          NUMBER NOT NULL,
    prod_descricao      VARCHAR2(10) NULL,
    pro_quantidade      NUMBER NULL,
    pro_valor_unidade   NUMBER(10, 2) NULL,
    PRIMARY KEY ( pro_codigo )
);

INSERT INTO produto VALUES (
    1,
    'cANETA',
    1.00,
    100
);

INSERT INTO produto VALUES (
    2,
    'APONTADOR',
    4.00,
    400
);

INSERT INTO produto VALUES (
    3,
    'REGUA',
    5.00,
    600
);*/
SELECT
  p.pro_codigo "Cód.",
  p.prod_descricao "Desc.",
  p.pro_quantidade "Qtde.",
  p.pro_valor_unidade "Valor"
FROM produto p
WHERE
  (
    SELECT
      MAX(pro_valor_unidade)
    FROM produto
  ) = p.pro_valor_unidade;
UPDATE produto
SET
  pro_valor_unidade = 1.1 * pro_valor_unidade
WHERE
  pro_valor_unidade = (
    SELECT
      MAX(pro_valor_unidade)
    FROM produto
  );
CREATE TABLE prod_2 AS (
    SELECT
      *
    FROM produto p
    WHERE
      pro_valor_unidade < (
        SELECT
          AVG(pro_valor_unidade)
        FROM produto
      )
  );
DELETE FROM prod_2
WHERE
  pro_valor_unidade = (
    SELECT
      MIN(pro_valor_unidade)
    FROM prod_2
  );
SELECT
  lower(prod_descricao),
  upper(prod_descricao),
  initcap(prod_descricao),
  'Bora comprar ' || upper(prod_descricao),
  substr(upper(prod_descricao), 1, 3),
  length(prod_descricao),
  instr(upper(prod_descricao), 'A'),
  lpad(prod_descricao, 10, '.'),
  rpad(prod_descricao, 10, '.'),
  TRIM('A'
FROM upper(prod_descricao))
FROM produto
WHERE
  lower(prod_descricao) NOT IN ('apontador', 'regua');