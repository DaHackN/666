program POMOGITE;
var a,b,c, f:real;
var g:integer;
begin
 writeln('Напишите два числа.');
 readln(a,b);
 c:=a+b;
 writeln('Сложение ',c:4:2);
 c:=a-b;
 writeln('Вычитание ',c:4:2);
 c:=a*b;
 writeln('Умножение ',c:4:2);
 c:=a/b;
 wirteln('Деление ',c:4:2);
 c:=sqrt(a);
 f:=sqrt(b);
 writeln('Кроень из двух чисел ',c:4:2,' ',f:4:2);
 c:=sqr(a);
 f:=aqr(b);
 writeln('Квадраты чисел ',c:4:2,' ',f:4:2);
 g:=(Int(a) div Int(b));
 writeln('Div ',g);
 g:=(Int(b) div Int(a));
 writeln('Mod ',g);
 readln();
end.