SELECT
    *
FROM
    gravadora;
------------------------------------

SELECT
    *
FROM
    cd;
------------------------------------

SELECT DISTINCT
    g.grav_codigo,
    g.grav_nome
FROM
    gravadora   g,
    cd          c
WHERE
    g.grav_codigo = c.grav_codigo;
------------------------------------

SELECT
    MIN(cd_preco_venda)
FROM
    cd
GROUP BY
    grav_codigo;
------------------------------------

SELECT
    cd_nome
FROM
    cd
WHERE
    cd_preco_venda IN (
        SELECT
            MIN(cd_preco_venda)
        FROM
            cd
        GROUP BY
            grav_codigo
    );
------------------------------------

SELECT
    cd_nome
FROM
    cd
WHERE
    cd_preco_venda < ANY (
        SELECT
            MIN(cd_preco_venda)
        FROM
            cd
        GROUP BY
            grav_codigo
    );
------------------------------------

SELECT
    cd_codigo,
    cd_nome,
    cd_preco_venda
FROM
    cd
WHERE
    cd_preco_venda < ALL (
        SELECT
            AVG(cd_preco_venda)
        FROM
            cd
        GROUP BY
            grav_codigo
    );
------------------------------------

SELECT
    cd_nome,
    cd_preco_venda,
    CASE
        WHEN cd_preco_venda < 10 THEN
            cd_preco_venda * 0.10
        WHEN cd_preco_venda >= 10
             AND cd_preco_venda < 13 THEN
            cd_preco_venda * 0.20
        ELSE
            cd_preco_venda * 0.30
    END venda
FROM
    cd;
------------------------------------

UPDATE cd
SET
    cd_preco_venda =
        CASE
            WHEN cd_preco_venda < 10 THEN
                cd_preco_venda * 1.10
            WHEN cd_preco_venda >= 10
                 AND cd_preco_venda < 13 THEN
                cd_preco_venda * 1.20
            ELSE
                cd_preco_venda * 1.30
        END;