program POMOGITE;
var a,b,c, f:real;
var g:integer;
begin
 writeln('������ ��� �᫠.');
 readln(a,b);
 c:=a+b;
 writeln('�������� ',c:4:2);
 c:=a-b;
 writeln('���⠭�� ',c:4:2);
 c:=a*b;
 writeln('��������� ',c:4:2);
 c:=a/b;
 wirteln('������� ',c:4:2);
 c:=sqrt(a);
 f:=sqrt(b);
 writeln('�஥�� �� ���� �ᥫ ',c:4:2,' ',f:4:2);
 c:=sqr(a);
 f:=aqr(b);
 writeln('������� �ᥫ ',c:4:2,' ',f:4:2);
 g:=(Int(a) div Int(b));
 writeln('Div ',g);
 g:=(Int(b) div Int(a));
 writeln('Mod ',g);
 readln();
end.