/*
** main.c for main in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Fri Mar 25 15:45:06 2016 Guillaume Roux
** Last update Fri Apr 15 09:33:31 2016 Eva Barbe
*/

#include "include/my.h"

t_bunny_response  click(t_bunny_event_state state,
                        t_bunny_mousebutton button,
                        void *data)
{
  if (button == BMB_LEFT && state == 0)
    ((t_blih *)data)->button = 0;
  else if (button == BMB_RIGHT && state == 0)
    ((t_blih *)data)->button = 1;
  else
    ((t_blih *)data)->button = -1;
  return (GO_ON);
}

t_bunny_response key_response(t_bunny_event_state state,
                              t_bunny_keysym key,
                              void *data)
{
  t_blih                *prog;

  prog = (t_blih *)data;
  (void)prog;
  if (state == GO_DOWN && key == BKS_ESCAPE)
    return (EXIT_ON_SUCCESS);
  return (GO_ON);
}

void	sound()
{
  t_bunny_sound	*i;

  i = (t_bunny_sound *)bunny_load_music("ress/Bonobo_-_El_Toro.ogg");
  bunny_sound_play(i);
}

int     main()
{
  t_blih  prog;

  srand(time(NULL));
  prog.win = bunny_start(WIDTH, HEIGHT, false, "Adventure Joe");
  prog.pix = bunny_new_pixelarray(WIDTH, HEIGHT);
  sound();
  bunny_set_mouse_visibility(prog.win, false);
  bunny_set_click_response(click);
  bunny_set_loop_main_function(&main_loop);
  bunny_set_key_response(&key_response);
  bunny_loop(prog.win, 60, &prog);
  bunny_stop(prog.win);
  return (0);
}
