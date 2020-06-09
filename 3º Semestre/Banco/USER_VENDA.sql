SELECT
    *
FROM
    telefone;

SELECT
    *
FROM
    cliente;

SELECT
    c.cli_codigo,
    c.cli_nome,
    t.tel_numero
FROM
    cliente    c,
    telefone   t
WHERE
    c.cli_codigo = t.cli_codigo (+);

SELECT
    c.cli_codigo,
    c.cli_nome,
    t.tel_numero
FROM
    cliente    c
    LEFT OUTER JOIN telefone   t ON c.cli_codigo = t.cli_codigo;

SELECT
    c.cli_codigo,
    c.cli_nome,
    t.tel_numero
FROM
    telefone   t
    RIGHT OUTER JOIN cliente    c ON c.cli_codigo = t.cli_codigo;

SELECT
    p.prod_descricao
FROM
    produto          p
    INNER JOIN item_do_pedido   i ON i.ped_numero = 1;

SELECT
    pro.prod_descricao
FROM
    produto          pro
    INNER JOIN item_do_pedido   i ON i.ven_codigo = 8;

SELECT
    por.prod_descricao
FROM
    pedido           p,
    item_do_pedido   i,
    produto          por
WHERE
    p.ped_numero = i.ped_numero
    AND i.pro_codigo = por.pro_codigo
    AND p.ven_codigo = 8;

SELECT
    pr.prod_descricao
FROM
    pedido           p
    INNER JOIN item_do_pedido   i ON p.ped_numero = i.ped_numero
    INNER JOIN produto          pr ON i.pro_codigo = pr.pro_codigo
WHERE
    p.ven_codigo = 8;