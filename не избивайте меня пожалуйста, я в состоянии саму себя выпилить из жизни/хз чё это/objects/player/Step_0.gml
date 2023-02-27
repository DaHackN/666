// movement
if keyboard_check(vk_left)
{if x > 10
 {x-=4}
}
if keyboard_check(vk_right)
{if x < 432
 {x+=4}
}

// shooting
if keyboard_check_pressed(vk_space)
 {instance_create_layer(x,y, "Instances_2", bullet)}

