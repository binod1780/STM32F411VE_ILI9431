#include <gui/screen_screen/screenView.hpp>

screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::handleTickEvent()
{
    tickCounter++;

    if (tickCounter > 100)
    {
        tickCounter = 0;
    }
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", tickCounter);
    textArea2.invalidate();
}

