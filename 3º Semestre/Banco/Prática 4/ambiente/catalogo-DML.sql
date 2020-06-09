insert into autor values (1,'Caetano Veloso');
insert into autor values (2,'Ana Carolina');
insert into autor values (3,'Nando Reis');
insert into autor values (4,'Edi Mota');
insert into autor values (5,'Elis Regina');

insert into musica values (1,'Alegria Alegria',50);
insert into musica values (2,'Quem de n�s dois',50);
insert into musica values (3,'� isso a�',50);
insert into musica values (4,'Por Onde Andei',45);
insert into musica values (5,'Fora da Lei',60);
insert into musica values (6,'Maria Maria',60);
insert into musica values (7,'Andan�a',60);

insert into CD_CATEGORIA values (1,5,10);
insert into CD_CATEGORIA values (2,11,20);
insert into CD_CATEGORIA values (3,21,30);

insert into gravadora values (1,'sony','a','222','joao','www.a.com.br');
insert into gravadora values (2,'eletronic','b','223','jose','www.b.com.br');
insert into gravadora values (3,'teste','b','223','jose','www.b.com.br');

insert into cd values (1,'CD1',10,sysdate,1,null);
insert into cd values (2,'CD2',12,sysdate,2,1);
insert into cd values (3,'CD3',20.00,sysdate,1,null);
insert into cd values (101, 'CD4', 25.00, sysdate, 2, null);

insert into faixa values (1,6,1);
insert into faixa values (1,7,2);

insert into autor_musica values (5,6);
insert into autor_musica values (5,7);
