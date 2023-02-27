instance_destroy(self);
instance_destroy(self-bullet);
effect_create_above(ef_explosion, x, y, 1, c_white);

direction = random(360);

if sprite_index == spr_comet_big
{   instance_copy(1);
	sprite_index = spr_comet_sml;   
}

 else if instance_number(comet) < 10
{
	sprite_index = spr_comet_big;
     x = -100;
}
else
{
	instance_destroy();
}
