insert into vendedor values (1,'José',1800.00);
insert into vendedor values (2,'Carlos',2490.00);
insert into vendedor values (3,'João',2780.00);
insert into vendedor values (4,'Antônio',9500.00);
insert into vendedor values (5,'Felipe',4600.00);
insert into vendedor values (6,'Jonas',2300.00);
insert into vendedor values (7,'João',870.00);
insert into vendedor values (8,'Josias',870.00);
insert into vendedor values (9,'Maurício',2930.00);

insert into produto values (1,'cANETA',1.00,100);
insert into produto values (2,'APONTADOR',4.00,400);
insert into produto values (3,'REGUA',5.00,600);


insert into cliente values(1,'Ana','Rua 17 n.19','Niterói', '24358310','RJ', '11111111111');
insert into cliente values(2,'Flávio','Áv. Pres. Vargas 10','São Paulo','22763931','SP','2253412693');
insert into cliente values(3,'Jorge','Rua Caiapo 13','Curitiba','30078500','PR','14512798349'); 
insert into cliente values(4,'Lúcia','Rua Itabira 123 Loja 9','Belo Horizonte','22124391','MG','2831521393'); 
insert into cliente values(5,'Maurício','Av. Paulista 1236 sl/2345','São Paulo','3012683','SP','3281698574'); 
insert into cliente values(7,'Rodolfo','Largo da Lapa 27 sobrado','Rio de Janeiro','30078900','RJ','1283512823'); 
insert into cliente values(8,'Beth','Av.Climério n. 45','São Paulo','25679300','SP','3248512673'); 
insert into cliente values(9,'Paulo','TV. Moraes c/3','Londrina','0','PR','3284822332'); 
insert into cliente values(10,'Lívio','Av. Beira Mar n. 1256','Florianópolis','300077500','SC','12736571'); 
insert into cliente values(11,'Susana','Rua Lopes Mendes 12','Niterói','30046500','RJ','2176357123');
insert into cliente values(12,'Renato','Rua Meireles n.123 sl.345','São Paulo','30225900','SP','1327657112');
insert into cliente values (13,'Sebastião','Rua da Igreja n.10','Uberaba','30438700','MG','3217654721');
insert into cliente values (14,'José','Quadra 3 bl. 3 sl. 1003','Brasília','22841650','DF','21763576123');  

insert into pedido values (1,7,1,20,to_date('10/06/2012','dd/mm/yyyy'),null);
insert into pedido values (2,1,7,20,to_date('31/07/2012','dd/mm/yyyy'),null);
insert into pedido values (3,1,7,15,to_date('01/06/2003','dd/mm/yyyy'),null);
insert into pedido values (4,1,5,20,to_date('01/07/2003','dd/mm/yyyy'),null);
insert into pedido values (5,1,7,20,to_date('01/08/2011','dd/mm/yyyy'),null);
insert into pedido values (6,2,7,15,to_date('31/05/2003','dd/mm/yyyy'),null);
insert into pedido values (7,3,7,30,to_date('30/06/2011','dd/mm/yyyy'),null);
insert into pedido values (8,5,9,30,to_date('01/08/2011','dd/mm/yyyy'),null);
insert into pedido values (9,7,1,20,to_date('12/04/2011','dd/mm/yyyy'),null);
insert into pedido values (10,8,2,30,to_date('12/04/2011','dd/mm/yyyy'),null);



insert into item_do_pedido values (1,9,10);
insert into item_do_pedido values (2,8,10);
insert into item_do_pedido values (3,6,1);
insert into item_do_pedido values (3,7,9);



insert into telefone values (1,1,'3923-1546');
insert into telefone values (2,2,'97858999');
insert into telefone values (3,2,'81267270');
insert into telefone values (4,3,'82567896');
insert into telefone values (5,8,'87589658');

commit;



