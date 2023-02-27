

if keyboard_check(vk_left)
 {
	 x-=5
 }
if keyboard_check(vk_right)
 {
	 x+=5
 }
if keyboard_check(vk_space)
 {
	 y-=5
 }
 
rot=point_direction(x,y,mouse_x,mouse_y);//Переменная rot будет зависить от поворота мыши
image_angle=rot//спрайт игрока будет поворачиваться вслед за мышкой
if place_free(x,y+1) //если под ногами пусто
{gravity=0.8}//включаем гравитацию
else//если под ногами что-то есть
{gravity=0}//выключаем.
if hp=0
{instance_destroy()}