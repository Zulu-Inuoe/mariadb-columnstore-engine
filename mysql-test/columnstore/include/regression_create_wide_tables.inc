drop table if exists wide;
drop table if exists wide2;

create table wide (
idx int,
c1 varchar(1000),
c2 varchar(1000),
c3 varchar(1000),
c4 varchar(1000),
c5 varchar(1000),
c6 varchar(1000),
c7 varchar(1000),
c8 varchar(1000),
c9 varchar(1000),
c10 varchar(1000),
c11 varchar(1000),
c12 varchar(1000),
c13 varchar(1000),
c14 varchar(1000),
c15 varchar(1000),
c16 varchar(1000),
c17 varchar(1000),
c18 varchar(1000),
c19 varchar(1000),
c20 varchar(1000),
c21 varchar(1000),
c22 varchar(1000),
c23 varchar(1000),
c24 varchar(1000),
c25 varchar(1000),
c26 varchar(1000),
c27 varchar(1000),
c28 varchar(1000),
c29 varchar(1000),
c30 varchar(1000),
c31 varchar(1000),
c32 varchar(1000),
c33 varchar(1000),
c34 varchar(1000),
c35 varchar(1000),
c36 varchar(1000),
c37 varchar(1000),
c38 varchar(1000),
c39 varchar(1000),
c40 varchar(1000),
c41 varchar(1000),
c42 varchar(1000),
c43 varchar(1000),
c44 varchar(1000),
c45 varchar(1000),
c46 varchar(1000),
c47 varchar(1000),
c48 varchar(1000),
c49 varchar(1000),
c50 varchar(1000)
)engine=columnstore DEFAULT CHARSET=latin1;

create table wide2 (
id int(11)       ,
c1 float         ,
c2 float         ,
c3 float         ,
c4 float         ,
c5 decimal(8,2)  ,
c6 decimal(6,4)  ,
c7 decimal(10,3) ,
c8 decimal(8,2)  ,
c9 varchar(200)  ,
c10 varchar(200) ,
c11 varchar(200) ,
c12 varchar(800) ,
c13 varchar(800) ,
c14 varchar(1000),
c15 varchar(1000),
c16 varchar(1000),
c17 varchar(2000),
c18 varchar(2000),
c19 varchar(4000),
c20 varchar(4000),
c_temp varchar(16)
)engine=columnstore DEFAULT CHARSET=latin1;
