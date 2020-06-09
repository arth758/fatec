/*1*/
SELECT
    grav_codigo
FROM
    gravadora
WHERE
    NOT EXISTS (
        SELECT
            *
        FROM
            cd
        WHERE
            cd.grav_codigo = gravadora.grav_codigo
            AND cd_preco_venda < 80
    );

/*QUESTÃO 2*/

SELECT
    cd_codigo,
    cd_nome,
    cd_preco_venda
FROM
    cd
WHERE
    cd_preco_venda IN (
        SELECT
            MAX(cd_preco_venda)
        FROM
            cd
        GROUP BY
            grav_codigo
    );
    
    /*3*/

SELECT
    cd_codigo,
    cd_nome,
    cd_preco_venda
FROM
    cd
WHERE
    cd_preco_venda < ANY (
        SELECT
            cd_preco_venda
        FROM
            cd
        WHERE
            grav_codigo = 10
    );
    
/*QUESTÃO 4*/

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
    
    /*5*/

SELECT
    cd_nome
FROM
    cd
WHERE
    cd_preco_venda > 10
    OR grav_codigo = 3
ORDER BY
    initcap(cd_nome) DESC;
    
/*QUESTÃO 6*/

SELECT
    c.cd_nome,
    c.cd_data_lancamento,
    g.grav_nome
FROM
    cd          c
    INNER JOIN gravadora   g ON c.grav_codigo = g.grav_codigo
WHERE
    to_date(c.cd_data_lancamento, 'DD/MM/YYYY') BETWEEN TO_DATE('21/05/20', 'DD/MM/YYYY') AND TO_DATE('23/05/20', 'DD/MM/YYYY');
    
    /*7*/

SELECT DISTINCT
    cd.cd_nome,
    g.grav_nome
FROM
    cd          cd,
    gravadora   g
WHERE
    cd.grav_codigo (+) = g.grav_codigo;
    
/*QUESTÃO 8*/

SELECT
    f.cd_codigo,
    COUNT(f.mus_codigo)
FROM
    faixa f
GROUP BY
    f.cd_codigo;

/*9*/

SELECT
    cd.cd_nome,
    cd.cd_preco_venda,
    CASE
        WHEN ( cd_preco_venda > 5.0
               AND cd_preco_venda < 10.0 ) THEN
            (
                SELECT
                    cat_codigo
                FROM
                    cd_categoria
                WHERE
                    cat_codigo = 1
            )
        WHEN ( cd_preco_venda > 11.0
               AND cd_preco_venda < 20.0 ) THEN
            (
                SELECT
                    cat_codigo
                FROM
                    cd_categoria
                WHERE
                    cat_codigo = 2
            )
        WHEN ( cd_preco_venda > 21.0
               AND cd_preco_venda < 30.0 ) THEN
            (
                SELECT
                    cat_codigo
                FROM
                    cd_categoria
                WHERE
                    cat_codigo = 3
            )
    END cd_preco_venda
FROM
    cd cd;
    
/*QUESTÃO 10*/

SELECT
    c.cd_nome
FROM
    cd c
WHERE
    c.cd_codigo IN (
        SELECT
            cd_indicado
        FROM
            cd
        WHERE
            ( grav_codigo IS NOT NULL
              AND cd_indicado IS NOT NULL )
    ); 
    
    /*11*/

INSERT INTO cd_categoria VALUES (
    4,
    31.00,
    40.00
);

INSERT INTO cd_categoria VALUES (
    5,
    31.00,
    40.00
);

ROLLBACK;

INSERT INTO cd_categoria VALUES (
    6,
    41.00,
    50.00
);

ROLLBACK;

INSERT INTO cd_categoria VALUES (
    7,
    51.00,
    60.00
);

UPDATE cd_categoria
SET
    menor_preco = 52.00
WHERE
    cat_codigo = 7;

COMMIT;

INSERT INTO cd_categoria VALUES (
    8,
    61.00,
    70.00
);

ROLLBACK;

COMMIT;

SELECT
    *
FROM
    cd_categoria;
    
/*QUESTÃO 12*/

/*INSERT INTO cd VALUES (
    101,
    'CD4',
    25.00,
    sysdate,
    2,
    NULL
);*/

SELECT DISTINCT
    g.grav_codigo,
    g.grav_nome,
    c.cd_preco_venda,
    SUM(m.mus_duracao)
FROM
    cd          c
    INNER JOIN faixa       f ON c.cd_codigo = f.cd_codigo
    INNER JOIN musica      m ON m.mus_codigo = f.mus_codigo
    INNER JOIN gravadora   g ON g.grav_codigo = c.grav_codigo
WHERE
    c.cd_codigo = 101
GROUP BY
    g.grav_codigo,
    g.grav_nome,
    c.cd_preco_venda;
    
    /*13*/

SELECT
    grav_nome,
    COUNT(cd.grav_codigo)
FROM
    cd,
    gravadora
GROUP BY
    grav_nome
HAVING
    COUNT(grav_nome) > 2;
    
/*QUESTÃO 14*/

SELECT
    mus_nome
FROM
    musica
WHERE
    mus_duracao = (
        SELECT
            MAX(mus_duracao)
        FROM
            musica
    );
    
    
 /*15*/

SELECT DISTINCT
    m.mus_nome,
    f.faixa_numero,
    c.cd_nome
FROM
    musica   m,
    faixa    f,
    cd       c
WHERE
    c.cd_codigo = 102
    AND c.cd_codigo = 103;
    
/*QUESTÃO 16*/

SELECT
    aut_codigo,
    aut_nome
FROM
    autor
WHERE
    aut_codigo < 10
UNION
SELECT
    mus_codigo,
    mus_nome
FROM
    musica
WHERE
    mus_codigo < 15;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
/**/