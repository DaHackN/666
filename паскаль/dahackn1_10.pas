Program dahackn1_10;
var v1,v2,t1,t2,v0,t0:real;

begin
 writeln('Vvedite znachenyya dlya objyomov 1 i 2, temperatyru 1 i 2');
 read(v1,v2,t1,t2);
 v0:= v1 + v2;
 t0:= (v1 * t1 + v2 * t2)/v0;
 writeln('V obshchee  = ',v0:4:2,' ','t obshchaya = ',t0:4:2);
 readln();
end.
