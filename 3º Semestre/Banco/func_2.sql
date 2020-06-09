create table departamento
(dep_id number(6) primary key,
 dep_descricao varchar2(30));

create table funcionario
(func_cod number(6) primary key,
 func_nome varchar2(20),
 func_sal number(10,2),
 dep_id number(6) references departamento (dep_id));

create table telefone
(tel_codigo number(4) primary key,
 func_cod number(6) references funcionario(func_cod),
 tel_numero number(15) );

insert into departamento values (1,'RH');
insert into departamento values (2,'Vendas');
insert into departamento values (3,'Inform?tica');
insert into departamento values (4,'Compras');

insert into funcionario values (1,'Paulo',4000.00,1);
insert into funcionario values (2,'Maria',1500.00,2);
insert into funcionario values (3,'Jo?o',4000.00,1);
insert into funcionario values (4,'Laura',5000.00,2);
insert into funcionario values (5,'Ana',6000.00,3);

insert into telefone values (1,1,39231546);
insert into telefone values (2,2,97858999);

commit;

select * from departamento;

select * from funcionario;

select * from telefone;

select 
    f.func_cod,
    f.func_nome,
    d.dep_descricao,
    t.tel_numero
from
    departamento d left outer join funcionario f
    on f.dep_id = d.dep_id
    left outer join telefone t on t.func_cod = f.func_cod
    order by f.func_nome, d.dep_descricao;
    
create table faixa_salarial (fa_cod varchar2(1)
constraint fs_Pk primary key,
fa_menor number(6,2),
fa_maior number (6,2));


insert into faixa_salarial values ('A',1000.00,2999.00);
insert into faixa_salarial values ('B',3000.00,5999.00);
insert into faixa_salarial values ('c',6000.00,9999.00);

select
    f.func_cod "Código",
    f.func_nome "Nome",
    f.func_sal "Salário",
    fs.fa_cod "Faixa Salarial"
from
    funcionario f,
    faixa_salarial fs
where 
    f.func_sal between fs.fa_menor and fs.fa_maior;

ALTER TABLE FUNCIONARIO ADD GERENTE_COD NUMBER(6)
REFERENCES FUNCIONARIO (FUNC_COD);
update funcionario
set gerente_cod=5
where func_cod in (1,2,3,4);

select f.func_nome Funcionario, g.func_nome Gerente
from funcionario f, funcionario g
where f.gerente_cod=g.func_cod;
    
select avg(func_sal)
from funcionario
where dep_id = 1;

select sum(func_sal)
from funcionario
where dep_id = 2;

select avg(func_sal), sum(func_sal)
from funcionario;

select min(func_sal), max(func_sal)
from funcionario;

select count(*) 
from funcionario 
where dep_id = 2;

select count(dep_id)
from funcionario;

select count(distinct dep_id)
from funcionario;

update funcionario
set func_sal = null
where func_cod = 2;

select avg(func_sal)
from funcionario;

select avg(nvl(func_sal, 0))
from funcionario;

select dep_id, avg(func_Sal)
from funcionario
group by dep_id;

select 
    d.dep_id, 
    d.dep_descricao,
    avg(f.func_sal)
from 
    funcionario f,
    departamento d
where 
    f.dep_id = d.dep_id 
group by 
    d.dep_id, 
    d.dep_descricao
having 
    avg(f.func_Sal) > 3500;