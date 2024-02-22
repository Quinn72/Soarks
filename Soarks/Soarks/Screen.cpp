#include "Screen.h"

namespace Soarks
{
	const int& Screen::Width()
	{
		// TODO: insert return statement here
		return m_width;
	}
	const int& Screen::height()
	{
		// TODO: insert return statement here
		return m_height;
	}
	const string& Screen::Title()
	{
		// TODO: insert return statement here
		return m_title;
	}
	const Color& Screen::ClearColor()
	{
		// TODO: insert return statement here
		return m_clearColor;
	}
	void Screen::SetWidth(int _newWidth)
	{
		m_width = _newWidth;
		SetWindowSize(m_width, m_height);
	}
	void Screen::SetHeight(int _newHeight)
	{
		m_height = _newHeight;
		SetWindowSize(m_width, m_height);
	}
	void Screen::SetTitle(const string& _newTitle)
	{
		m_title = _newTitle;
		SetWindowTitle(m_title.c_str());
	}
	void Screen::SetClearColor(Color _newColor)
	{
		m_clearColor = _newColor;
	}
	Screen::Screen(Config* _config)
	{
		m_width = 720;
		m_height = 480;
		m_title = "Soarks Framework";
		m_clearColor = RAYWHITE;
	}
	Screen::~Screen()
	{
		m_width = 0;
		m_height = 0;
		m_title = "";
		m_clearColor = {};
	}
	void Screen::Open()
	{
		InitWindow(m_height, m_width, m_title.c_str());
		InitAudioDevice();
	}
	void Screen::Close()
	{
		CloseAudioDevice();
		CloseWindow();

	}
	void Screen::NewFrame()
	{
		BeginDrawing();
		ClearBackground(m_clearColor);
	}
	void Screen::EndFrame()
	{
		EndDrawing()	;
	}
}
