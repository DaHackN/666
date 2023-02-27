program speedPhysics;
var v1,vo,v2,t,l:real;
begin
 writeln('Введите значения для скорости 1, времени и расстояния, чтобы найти скорость 2');
 read(v1,t,l);
 vo:=l/t;
 vo2:=vo*3600/1000;
 v2:=v1-vo;
 writeln('Скорость 2 равна ',v2:4:2);
 readln();
end.