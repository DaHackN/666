if instance_exists(obj_test_player) //Если объект игрока существует в комнате
{
	way=point_direction(x,y,obj_test_player.x,obj_test_player.y);//Переменная way равна направлению игрока относительно первоначальной позиции
    motion_set(way,10);
}//Задаем движение в сторону игрока