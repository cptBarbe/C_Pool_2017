/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#define EXIT_FAILURE 84
#define EXIT_SUCCES 0
#include <SFML/Graphics.h>
//#include <Event.h>

int main(void)
{
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow *window;
	sfEvent event;
	sfText *text;
	sfFont *font;
	//sfUint8 klein = {0, 33, 153};

	text = sfText_create();
	sfText_setString(text, "Hello world");
	font = sfFont_createFromFile("Barbershop in Thailand.ttf");
	sfText_setFont(text, font);
	window = sfRenderWindow_create(mode, "My first window", sfResize | sfClose, NULL);
	if (!window)
		return (EXIT_FAILURE);
	while (window) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			sfRenderWindow_clear(window, sfRed);
			sfRenderWindow_drawText(window, text, NULL);
			sfRenderWindow_display(window);
			if (event.type == sfEvtClosed) {
				sfRenderWindow_close(window);
				sfRenderWindow_destroy(window);
				return (EXIT_SUCCES);
			}
		}
	}
}
