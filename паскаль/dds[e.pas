program Da1_10;
var v1, v2, t1, t2, vo, to :real;
begin
 writeln('Введите значения для двух объемов и температур');
 read(v1,v2,t1,t2);
 vo:=v1+v2;
 to:=(v1*t1+v2*t2)/vo;
 writeln('общий объём = ',vo:4:2,' ','общая температура = ',to:4:2);
 readln();
end.