#pragma once
#include "Globals.hpp"

namespace Break
{
	namespace Infrastructure
	{

		class BREAK_API GameInput
		{
		public:

			enum InputKeys{
				Backspace,
				Tab,
				Enter,
				Esc,
				Space,
				Plus,
				Minus,
				Period,
				Comma,
				Num_0,
				Num_1,
				Num_2,
				Num_3,
				Num_4,
				Num_5,
				Num_6,
				Num_7,
				Num_8,
				Num_9,
				Colon,
				SemiColon,
				Less,
				Greater,
				Equals,
				Question,
				Left_Bracket,
				Right_Bracket,
				Backslash,
				Underscore,
				Backquote,
				A,
				B,
				C,
				D,
				E,
				F,
				G,
				H,
				I,
				J,
				K,
				L,
				M,
				N,
				O,
				P,
				Q,
				R,
				S,
				T,
				U,
				V,
				W,
				X,
				Y,
				Z,
				Delete,
				NumPad_0,
				NumPad_1,
				NumPad_2,
				NumPad_3,
				NumPad_4,
				NumPad_5,
				NumPad_6,
				NumPad_7,
				NumPad_8,
				NumPad_9,
				NumPad_Period,
				NumPad_Divide,
				NumPad_Plus,
				NumPad_Minus,
				NumPad_Enter,
				NumPad_Equals,
				NumPad_Multiply,
				Up,
				Down,
				Right,
				Left,
				Insert,
				Home,
				End,
				PageUp,
				PageDown,
				F1,
				F2,
				F3,
				F4,
				F5,
				F6,
				F7,
				F8,
				F9,
				F10,
				F11,
				F12,
				NumLock,
				CapsLock,
				ScrolLock,
				Right_Shift,
				Left_Shift,
				Right_Ctrl,
				Left_Ctrl,
				Right_Alt,
				Left_Alt,
				Left_Windows,
				Right_Windows
			};

			static bool Keypressed(InputKeys key);

			static bool keys[1024];
			static bool keysPressed[1024];
		};

	}
}