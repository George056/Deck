#ifndef CARD
#define CARD

#include<string>
#include<iostream>

namespace gc_card {

		const int NUMBER_OF_SUITES_NO_JOKERS = 4;
		const int NUMBER_OF_SUITES_WTIH_JOKERS = 5;
		const int NUMBER_OF_RANKS_NO_JOKERS = 12;
		const int NUMBER_OF_RANKS_WITH_JOKERS = 13;

		enum class rank {
				ace = 1,
				two,
				three,
				four,
				five,
				six,
				seven,
				eight,
				nine,
				jack,
				queen,
				king,
				joker
		};

		enum class suite {
				hearts = 1,
				diamonds,
				clubs,
				spades,
				joker
		};

		class card {
		protected:
				rank __rank;
				suite __suite;

		public:
				card() = default;
				card(const card&) = default;
				card(card&&) = default;
				card& operator =(const card&) = default;
				card& operator =(card&&) = default;
				~card() = default;

				card(rank r, suite s) : __rank{ r }, __suite{ s } {}
				card(std::string, std::string);

				rank get_rank();
				suite get_suite();

				static suite string_to_suite(std::string);
				static rank string_to_rank(std::string);

				static std::string suite_to_string(suite);
				static std::string rank_to_string(rank);

				void operator >> (std::ostream& out) {
						out << rank_to_string(__rank) << " : " << suite_to_string(__suite) << std::endl;
				}

		};
}

#endif