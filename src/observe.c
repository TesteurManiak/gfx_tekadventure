/*
** observe.c for observe in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Fri Apr 15 10:25:09 2016 Guillaume Roux
** Last update  Fri Apr 15 10:25:09 2016 Guillaume Roux
*/

#include "include/my.h"

void  act_observe(t_blih *prog)
{
  if (prog->button == 0)
    prog->switcher->observe = 1;
}