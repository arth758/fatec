
CREATE TABLE cliente (
       cli_codigo           NUMBER NOT NULL,
       cli_nome             VARCHAR2(30) NULL,
       cli_endereco         VARCHAR2(30) NULL,
       cli_cidade           VARCHAR2(30) NULL,
       cli_cep              VARCHAR2(10) NULL,
       cli_estado           VARCHAR(2) NULL,
       cli_cpf              NUMBER NULL,
       PRIMARY KEY (cli_codigo)
);


CREATE TABLE vendedor (
       ven_codigo           NUMBER NOT NULL,
       ven_nome             VARCHAR2(30) NULL,
       ven_salario_fixo     NUMBER(10,2) NULL,
       PRIMARY KEY (ven_codigo)
);


CREATE TABLE pedido (
       ped_numero           NUMBER NOT NULL,
       ven_codigo           NUMBER NULL,
       cli_codigo           NUMBER NULL,
       ped_prazo_entrega    NUMBER NULL,
       ped_data             DATE NULL,
       ped_valor_total      CHAR(18) NULL,
       PRIMARY KEY (ped_numero), 
       FOREIGN KEY (ven_codigo)
                             REFERENCES vendedor (ven_codigo), 
       FOREIGN KEY (cli_codigo)
                             REFERENCES cliente(cli_codigo)
);


CREATE TABLE telefone (
       tel_codigo           NUMBER NOT NULL,
       cli_codigo           NUMBER NULL,
       tel_numero           VARCHAR2(18) NULL,
       PRIMARY KEY (tel_codigo), 
       FOREIGN KEY (cli_codigo)
                             REFERENCES cliente (cli_codigo)
);


CREATE TABLE produto (
       pro_codigo           NUMBER NOT NULL,
       prod_descricao       VARCHAR2(10) NULL,
       pro_quantidade       NUMBER NULL,
       pro_valor_unidade    NUMBER(10,2) NULL,
       PRIMARY KEY (pro_codigo)
);


CREATE TABLE item_do_pedido (
       pro_codigo           NUMBER NOT NULL,
       item_quantidade      NUMBER NULL,
       ped_numero           NUMBER NOT NULL,
       PRIMARY KEY (pro_codigo, ped_numero), 
       FOREIGN KEY (pro_codigo)
                             REFERENCES produto, 
       FOREIGN KEY (ped_numero)
                             REFERENCES pedido (ped_numero)
);



