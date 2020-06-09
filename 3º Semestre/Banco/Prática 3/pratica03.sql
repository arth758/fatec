/*******************************/
/*FEITO POR:********************/
/**ARTHUR REIS******************/
/**MARCOS ALEXANDRE*************/
/*******************************/

/*QUEST�O 1*/
SELECT
    p.pes_nome
FROM
    pessoa       p,
    emprestimo   e
WHERE
    e.emp_cod = 1;

/*QUEST�O 2*/

SELECT
    edi_descricao
FROM
    editora
ORDER BY
    edi_descricao;

/*QUEST�O 3*/

SELECT
    liv_titulo
FROM
    livro
WHERE
    liv_titulo LIKE 'A%';

/*QUEST�O 4*/

SELECT
    liv_titulo,
    anopublicacao
FROM
    livro
WHERE
    liv_titulo LIKE 'A%'
    AND anopublicacao > '2013';

/*QUEST�O 5*/

SELECT
    COUNT(tel_ddd)
FROM
    telefone
WHERE
    tel_ddd = 12;

/*QUEST�O 6*/

SELECT
    a.pes_nro_matricula,
    COUNT(e.pes_cod)
FROM
    aluno        a,
    pessoa       p,
    emprestimo   e
WHERE
    p.pes_cod = a.pes_cod
    AND a.pes_cod = e.pes_cod
GROUP BY
    a.pes_nro_matricula;

/*QUEST�O 7*/

SELECT
    e.edi_cod,
    e.edi_descricao,
    l.liv_cod
FROM
    editora   e
    RIGHT OUTER JOIN livro     l ON e.edi_cod = l.edi_cod;


/*QUEST�O 8*/

SELECT
    e.exe_cod,
    e.exe_descricao,
    p.emp_data_emprestimo
FROM
    exemplar          e,
    emprestimo        p,
    item_emprestimo   i
WHERE
    e.exe_cod = i.exe_cod
    AND p.emp_cod = i.emp_cod
    AND p.emp_data_emprestimo = '03/11/15';

/*QUEST�O 9*/

SELECT
    liv_cod,
    COUNT(liv_cod)
FROM
    exemplar
GROUP BY
    liv_cod
HAVING
    COUNT(liv_cod) > 3;

/*QUEST�O 10*/

/*SINTAXE ANSI #1*/

SELECT
    ps.pes_nome    "Nome",
    pf.titulacao   "Titula��o",
    t.tel_numero   "Tel. N�mero"
FROM
    professor   pf
    LEFT OUTER JOIN pessoa      ps ON ( pf.pes_cod = ps.pes_cod ),
    telefone    t;

/*SINTAXE ANSI #2*/

SELECT
    ps.pes_nome    "Nome",
    pf.titulacao   "Titula��o",
    t.tel_numero   "Tel. N�mero"
FROM
    pessoa      ps
    RIGHT OUTER JOIN professor   pf ON ( pf.pes_cod = ps.pes_cod ),
    telefone    t;
    

/*SINTAXE ORACLE*/

SELECT
    ps.pes_nome    "Nome",
    pf.titulacao   "Titula��o",
    t.tel_numero   "Tel. N�mero"
FROM
    pessoa      ps,
    professor   pf,
    telefone    t
WHERE
    ps.pes_cod (+) = pf.pes_cod;
    
/*QUEST�O 11*/

SELECT
    l.liv_titulo,
    l.anopublicacao
FROM
    livro l
WHERE
    l.anopublicacao = (
        SELECT
            MIN(lv.anopublicacao)
        FROM
            livro lv
    );

/*QUEST�O 12*/

SELECT
    p.pes_nome "Pessoa",
    COUNT(e.pes_cod) "Qtde. de Livros"
FROM
    pessoa       p,
    emprestimo   e
WHERE
    p.pes_cod = e.pes_cod
GROUP BY
    p.pes_nome;

/*QUEST�O 13*/

SELECT
    liv_cod "C�d do Livro",
    COUNT(liv_cod) "Qtde. de Exemplares"
FROM
    exemplar
GROUP BY
    liv_cod
ORDER BY
    liv_cod;

/*QUEST�O 14*/

SELECT
    liv_titulo "T�tulo"
FROM
    livro
WHERE
    upper(liv_titulo) LIKE 'A%'
    AND anopublicacao > 2011;
    
/*QUEST�O 15*/

SELECT DISTINCT
    liv.liv_titulo
FROM
    item_emprestimo   ie
    INNER JOIN emprestimo        emp ON ie.emp_cod = emp.emp_cod
    INNER JOIN pessoa            pes ON emp.pes_cod = pes.pes_cod
    INNER JOIN exemplar          exp ON ie.exe_cod = exp.exe_cod
    INNER JOIN livro             liv ON liv.liv_cod = exp.liv_cod
WHERE
    pes.pes_cod = 1;