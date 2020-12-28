#include "Deck.hpp"

std::vector<gc_card::card> gc_card::deck::make_deck_no_jokers() {
		std::vector<gc_card::card> result;
		for (int suite = 1; suite <= NUMBER_OF_SUITES_NO_JOKERS; ++suite) {
				for (int rank = 1; rank <= NUMBER_OF_RANKS_NO_JOKERS; ++rank) {
						result.push_back(gc_card::card((gc_card::rank)rank, (gc_card::suite)suite));
				}
		}
		return result;
}

std::vector<gc_card::card> gc_card::deck::make_deck_with_jokers() {
		std::vector<gc_card::card> result(make_deck_no_jokers());
		result.push_back(card(rank::joker, suite::joker));
		result.push_back(card(rank::joker, suite::joker));
		return result;
}

std::vector<gc_card::card> gc_card::deck::draw_cards(int number_of_cards) {
		std::vector<card> result;
		for (int i = 0; i < number_of_cards; ++i) {
				result.push_back(draw_card());
		}
		return result;
}