#include "esphome.h"

class QRcode
{
	private:
    esphome::display::DisplayBuffer *display;
		void render(int x, int y, int color);

	public:
		QRcode(esphome::display::DisplayBuffer *display);

		void init();
		void debug();
		void screenwhite();
		void create(String message);
};
