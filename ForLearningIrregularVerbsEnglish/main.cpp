#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <cstdlib>
#include <windows.h>
#include <random>
#include <time.h>

#define AMOUNT_OF_THE_WORDS 110

std::string get_word();
class Forms
{
private:
	std::string second, third, translated, translated2;

public:
	Forms(std::string s, std::string t, std::string translate) : second(s), third(t), translated(translate), translated2("") { }
	Forms(std::string s, std::string translated) : second(s), third(s), translated(translated), translated2("") { }
	Forms(std::string s, std::string t, std::string translate, std::string translated2) : second(s), third(t), translated(translate), translated2(translated2) { }

	bool is_second(const std::string& word) const
	{
		return word == second;
	}
	bool is_third(const std::string& word) const
	{
		return third == word;
	}

	bool is_translated(const std::string& word) const
	{
		return translated2 == word || translated == word;
	}
	bool two_meanings() const
	{
		return translated2 != "";
	}

	std::string get_forms() const
	{
		return second + " " + third + " " + translated + " " + translated2;
	}
};

void next();
void clear();

void hand(std::map<std::string, Forms>::const_iterator word);

static const std::map<std::string, Forms> data =
{
	{ "awake", Forms("awoke", "awoken", "будить", "просыпаться")},
	{ "be", Forms("was/were", "been", "быть") },
	{ "bear", Forms("bore", "born", "носить", "родить") },
	{ "beat", Forms("beat", "beaten", "бить") },
	{ "become", Forms("became", "become", "становиться", "стать") },
	{ "begin", Forms("began", "begun", "начинаться") },
	{ "bend", Forms("bent", "bent", "гнуть", "сгибать") },
	{ "bind", Forms("bound", "связывать") },
	{ "bite", Forms("bit", "bitten", "кусать") },
	{ "blow", Forms("blew", "blown", "дуть") },
	{ "break", Forms("broke", "broken", "ломать") },
	{ "bring", Forms("brought", "приносить") },
	{ "build", Forms("built", "строить") },
	{ "burn", Forms("burnt", "burnt", "гореть", "жечь") },
	{ "buy", Forms("bought", "покупать") },
	{ "cast", Forms("cast", "cast", "бросать", "кидать") },
	{ "catch", Forms("caught", "caught", "ловить", "схватывать") },
	{ "choose", Forms("chose", "chosen", "выбирать") },
	{ "come", Forms("came", "приходить") },
	{ "cost", Forms("cost", "стоить") },
	{ "cut", Forms("cut", "резать") },
	{ "do", Forms("did", "done", "делать") },
	{ "deal", Forms("dealt", "иметь дело") },
	{ "draw", Forms("drew", "drawn", "тащить", "рисовать") },
	{ "dream", Forms("dreamt", "dreamt", "мечтать", "видеть сны") },
	{ "drink", Forms("drank", "drunk", "пить") },
	{ "drive", Forms("drove", "driven", "ехать", "везти") },
	{ "eat", Forms("ate", "eaten", "есть") },
	{ "fall", Forms("fell", "fallen", "падать") },
	{ "feed", Forms("fed", "fed", "кормить", "подавать") },
	{ "feel", Forms("felt", "чувствовать") },
	{ "fight", Forms("fought", "fought", "бороться", "сражаться") },
	{ "find", Forms("found", "находить") },
	{ "fly", Forms("flew", "flown", "летать") },
	{ "forbid", Forms("forbade", "forbidden", "запрещать") },
	{ "forget", Forms("forgot", "forgot", "забывать") },
	{ "forgive", Forms("forgave", "forgiven", "прощать")},
	{ "freeze", Forms("froze", "frozen", "замерзать", "замораживать")},
	{ "get", Forms("got", "got", "получать", "становиться") },
	{ "give", Forms("gave", "given", "давать") },
	{ "go", Forms("went", "gone", "идти", "ехать") },
	{ "grow", Forms("grew", "grown", "расти", "выращивать") },
	{ "have", Forms("had", "иметь") },
	{ "hear", Forms("heard", "слышать") },
	{ "hide", Forms("hid", "hidden", "прятать") },
	{ "hit", Forms("hit", "hit", "ударять", "поражать") },
	{ "hold", Forms("held", "held", "держать", "хранить") },
	{ "hurt", Forms("hurt", "hurt", "повредить", "ушибить") },
	{ "keep", Forms("kept", "kept", "держать", "хранить") },
	{ "know", Forms("knew", "known", "знать") },
	{ "lay", Forms("laid", "laid", "класть", "положить") },
	{ "lead", Forms("led", "вести") },
	{ "learn", Forms("learnt", "учиться") },
	{ "leave", Forms("left", "left", "оставлять", "покидать") },
	{ "let", Forms("let", "позволять") },
	{ "lie", Forms("lay", "lain", "лежать") },
	{ "light", Forms("lit", "lit", "зажигать", "освещать") },
	{ "lose", Forms("lost", "терять") },
	{ "make", Forms("made", "made", "делать", "заставлять")},
	{ "mean", Forms("meant", "meant", "значить", "подразумевать") },
	{ "meet", Forms("met", "встречать") },
	{ "mistake", Forms("mistook", "mistaken", "ошибаться") },
	{ "pay", Forms("paid", "платить") },
	{ "put", Forms("put", "класть") },
	{ "read", Forms("read", "читать") },
	{ "ride", Forms("rode", "ridden", "ездить верхом") },
	{ "ring", Forms("rang", "rung", "звонить", "звенеть") },
	{ "rise", Forms("rose", "risen", "подниматься") },
	{ "run", Forms("ran", "run", "бежать") },
	{ "say", Forms("said", "said", "говорить", "сказать")},
	{ "see", Forms("saw", "seen", "видеть") },
	{ "seek", Forms("sought", "искать") },
	{ "sell", Forms("sold", "продавать") },
	{ "send", Forms("sent", "посылать") },
	{ "set", Forms("set", "set", "помещать", "устанавливать") },
	{ "shake", Forms("shook", "shaken", "трясти") },
	{ "shave", Forms("shaved", "shaven", "бриться") },
	{ "shine", Forms("shone", "shone", "сиять", "светить") },
	{ "shoot", Forms("shot", "стрелять") },
	{ "show", Forms("showed", "shown", "показывать") },
	{ "shut", Forms("shut", "закрывать") },
	{ "sing", Forms("sang", "sung", "петь") },
	{ "sink", Forms("sank", "sunk", "погружаться", "тонуть") },
	{ "sit", Forms("sat", "сидеть") },
	{ "sleep", Forms("slept", "спать") },
	{ "slide", Forms("slid", "скользить") },
	{ "smell", Forms("smelt", "пахнуть") },
	{ "speak", Forms("spoke", "spoken", "говорить") },
	{ "speed", Forms("sped", "sped", "спешить", "ускорять") },
	{ "spell", Forms("spelt", "spelt", "писать", "произносить слова по буквам") },
	{ "spend", Forms("spent", "тратить") },
	{ "spoil", Forms("spoilt", "портить") },
	{ "spread", Forms("spread", "распространять") },
	{ "stand", Forms("stood", "стоять") },
	{ "steal", Forms("stole", "stolen", "красть") },
	{ "stick", Forms("stuck", "stuck", "приклеивать", "уколоть") },
	{ "strike", Forms("struck", "struck", "ударять", "бастовать") },
	{ "swim", Forms("swam", "swum", "плавать") },
	{ "take", Forms("took", "taken", "брать") },
	{ "teach", Forms("taught", "taught", "обучать", "учить") },
	{ "tear", Forms("tore", "torn", "рвать") },
	{ "tell", Forms("told", "рассказывать") },
	{ "think", Forms("thought", "думать") },
	{ "throw", Forms("threw", "thrown", "бросать") },
	{ "understand", Forms("understood", "понимать") },
	{ "undertake", Forms("undertook", "undertaken", "предпринимать") },
	{ "wake", Forms("woke", "woken", "будить", "просыпаться") },
	{ "wear", Forms("wore", "worn", "носить") },
	{ "win", Forms("won", "won", "выигрывать") },
	{ "write", Forms("wrote", "written", "писать") }
};

void direct_mode(unsigned int, unsigned int);
void random_mode(unsigned int, unsigned int);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("color 02");
	clear();
	unsigned int start = 0, end = 0;

	std::cout << "С какого слова повторять (номер): ";
	std::cin >> start;

	std::cout << "Какой номер последний: ";
	std::cin >> end;


	if (start > end || end > AMOUNT_OF_THE_WORDS)
	{
		std::cout << "неправильные номера";
		next(); next();

		return 0;
	}

	clear();

	while (true)
		{
			unsigned int mode;
			std::cout << "Рандомная последовательность из слов?:\n\t 1) Да\n\t 2) Нет\n\n>> ";

			std::cin >> mode;
			system("cls");

			if (mode == 1)
			{
				random_mode(start, end);
			}
			else if (mode == 2)
			{
				direct_mode(start, end);
			}

			std::cout << "Чтобы закончить, нажмите [Ctrl] + [C]. Нажмите [Enter], чтобы продолжить" << std::endl;

			next();
			clear();
		}

	return 0;
}

std::string get_word()
{
	std::string word = "";
	char tmp;

	while (true)
	{
		tmp = std::cin.get();

		if ((tmp != ' ' && tmp != '\n') || (word != "" && tmp != '\n'))
		{
			word += tmp;
		}
		else if (word != "" && tmp == '\n')
		{
			break;
		}
	}

	while (word[word.length() - 1] == ' ')
	{
		word.erase(word.length() - 1, 1);
	}

	return word;
}
void hand(std::map<std::string, Forms>::const_iterator word)
{
	std::string store, store2;
	size_t score = 0;

	std::cout << "Введите формы и перевод, соотвествующии слову " << word->first << ":\n";

	std::cout << "\tВторая форма (Past Simple) >> ";
	if (word->second.is_second(get_word())) score++;

	std::cout << "\tТретья форма (Past Partticiple II) >> ";
	if (word->second.is_third(get_word())) score++;

	std::cout << "\tПеревод >> "; store = get_word();
	if (word->second.is_translated(store)) score++;

	if (word->second.two_meanings())
	{
		std::cout << "\tВторой перевод >> "; store2 = get_word();
		if (word->second.is_translated(store2) && store2 != store) score++;
	}

	std::cout << "\nCorrect answers: " << word->second.get_forms() << std::endl;
	std::cout << "SCORE: " << score << " of " << 3 + word->second.two_meanings() << std::endl << std::endl;

	std::cout << "Press [Enter]";

	next();
	clear();
}

void direct_mode(unsigned int start, unsigned int end)
{
	for (auto word = std::next(data.begin(), start - 1); word != std::next(data.begin(), end); ++word)
	{
		hand(word);
	}

}
void random_mode(unsigned int start, unsigned int end)
{
	unsigned int ind;
	srand(time(NULL));

	std::set<int> indexes;
	for (int i = start - 1; i < end; i++) indexes.insert(i);

	for (unsigned int i = end - start + 1; i; i--)
	{
		ind = *std::next(indexes.begin(), rand() % i);
		indexes.erase(ind);

		hand(std::next(data.begin(), ind));
	}

}

void clear()
{
	system("cls");
}
void next()
{
	std::cin.get();
}