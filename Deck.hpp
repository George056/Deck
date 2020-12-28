#ifndef DECK
#define DECK
#include<vector>
#include"Card.hpp"

namespace gc_card {

		class deck {
		protected:
				std::vector<card> __deck;
				std::vector<card>::iterator __top_card;

		public:
				deck(const deck&) = default;
				deck(deck&&) = default;
				deck& operator =(const deck&) = default;
				deck& operator =(deck&&) = default;
				~deck() = default;

				deck() {
						__deck = make_deck_no_jokers();
						__top_card = __deck.begin();
				}

				deck(std::vector<card> this_deck) : __deck{ this_deck }, __top_card{ __deck.begin() } {}

				static std::vector<card> make_deck_no_jokers();
				static std::vector<card> make_deck_with_jokers();

				using iterator = std::vector<card>::iterator;

				iterator begin() {
						return __deck.begin();
				}

				iterator end() {
						return __deck.end();
				}

				card draw_card() {
						card result = *__top_card;
						__deck.erase(__deck.begin());
						__top_card = __deck.begin();
						return result;
				}

				std::vector<card> draw_cards(int number_of_cards);

				size_t size() { __deck.size(); }

				void place_card_on_bottom_of_deck(card c) {
						__deck.push_back(c);
				}

		};

}

#endif