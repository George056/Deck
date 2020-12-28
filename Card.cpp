#include "Card.hpp"

gc_card::card::card(std::string suite, std::string rank) {
		gc_card::rank rank_temp = string_to_rank(rank);
		gc_card::suite suite_temp = string_to_suite(suite);
}

inline gc_card::rank gc_card::card::get_rank() {
		return __rank;
}

inline gc_card::suite gc_card::card::get_suite() {
		return __suite;
}

gc_card::suite gc_card::card::string_to_suite(std::string suite) {
		gc_card::suite temp;
		if (suite == "hearts") temp = gc_card::suite::hearts;
		else if (suite == "diamonds") temp = gc_card::suite::diamonds;
		else if (suite == "clubs") temp = gc_card::suite::clubs;
		else if (suite == "spades") temp = gc_card::suite::spades;
		return temp;
}

gc_card::rank gc_card::card::string_to_rank(std::string rank) {
		gc_card::rank temp;

		if (rank == "ace") temp = gc_card::rank::ace;
		else if (rank == "two") temp = gc_card::rank::two;
		else if (rank == "three") temp = gc_card::rank::three;
		else if (rank == "four") temp = gc_card::rank::four;
		else if (rank == "five") temp = gc_card::rank::five;
		else if (rank == "six") temp = gc_card::rank::six;
		else if (rank == "seven") temp = gc_card::rank::seven;
		else if (rank == "eight") temp = gc_card::rank::eight;
		else if (rank == "nine") temp = gc_card::rank::nine;
		else if (rank == "jack") temp = gc_card::rank::jack;
		else if (rank == "queen") temp = gc_card::rank::queen;
		else if (rank == "king") temp = gc_card::rank::king;
		else if (rank == "joker") temp = gc_card::rank::joker;

		return temp;
}

std::string gc_card::card::suite_to_string(gc_card::suite my_suite) {
		std::string temp;

		switch (my_suite) {
		case gc_card::suite::clubs: temp = "clubs";
				break;
		case gc_card::suite::spades: temp = "spades";
				break;
		case gc_card::suite::hearts: temp = "hearts";
				break;
		case gc_card::suite::diamonds: temp = "diamonds";
				break;
		case gc_card::suite::joker: temp = "joker";
		}

		return temp;
}

std::string gc_card::card::rank_to_string(gc_card::rank my_rank) {
		std::string temp;

		switch (my_rank) {
		case gc_card::rank::ace: temp = "ace";
				break;
		case gc_card::rank::two: temp = "two";
				break;
		case gc_card::rank::three: temp = "three";
				break;
		case gc_card::rank::four: temp = "four";
				break;
		case gc_card::rank::five: temp = "five";
				break;
		case gc_card::rank::six: temp = "six";
				break;
		case gc_card::rank::seven: temp = "seven";
				break;
		case gc_card::rank::eight: temp = "eight";
				break;
		case gc_card::rank::nine: temp = "nine";
				break;
		case gc_card::rank::jack: temp = "jack";
				break;
		case gc_card::rank::queen: temp = "queen";
				break;
		case gc_card::rank::king: temp = "king";
				break;
		case gc_card::rank::joker: temp = "joker";
				break;
		}

		return temp;
}