// Boost.Range library
//
//  Copyright Eric Niebler 2013.
//
//  Use, modification and distribution is subject to the
//  Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
// Acknowledgements: Thanks for Paul Fultz for the suggestions that
//                   concepts can be ordinary Boolean metafunctions.
//
// For more information, see http://www.boost.org/libs/range/
//

#ifndef RANGES_V3_UTILITY_ITERATOR_TRAITS_HPP
#define RANGES_V3_UTILITY_ITERATOR_TRAITS_HPP

#include <range/v3/utility/iterator_concepts.hpp>

namespace ranges
{
    inline namespace v3
    {
        ////////////////////////////////////////////////////////////////////////////////////////////
        // iterator traits
        template<typename It>
        using iterator_value_t = concepts::Iterator::value_t<It>;

        template<typename It>
        using iterator_reference_t = concepts::Iterator::reference_t<It>;

        template<typename It>
        using iterator_category_t = concepts::Iterator::category_t<It>;

        template<typename It>
        using iterator_difference_t = concepts::Iterator::difference_t<It>;

        template<typename It>
        using iterator_pointer_t = concepts::Iterator::pointer_t<It>;

        // Metafunctions
        template<typename It>
        struct iterator_category
        {
            using type = iterator_category_t<It>;
        };

        template<typename It>
        struct iterator_value
        {
            using type = iterator_value_t<It>;
        };

        template<typename It>
        struct iterator_difference
        {
            using type = iterator_difference_t<It>;
        };

        template<typename It>
        struct iterator_pointer
        {
            using type = iterator_pointer_t<It>;
        };

        template<typename It>
        struct iterator_reference
        {
            using type = iterator_reference_t<It>;
        };
    }
}

#endif // RANGES_V3_UTILITY_ITERATOR_TRAITS_HPP
