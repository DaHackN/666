Program Halo;
var s,R1,R2:real;
begin
 writeln('Введите значения для внешнего радиуса R1 и для внутреннего радиуса R2 и нажмите Ввод');
 read(R1,R2);
 s:=pi*((sqr(R1))-(sqr(R2)));
 writeln('Площадь кольца равна ',s:4:2);
 readln();
end.