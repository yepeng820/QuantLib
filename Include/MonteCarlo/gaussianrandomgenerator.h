/*
 * Copyright (C) 2000
 * Ferdinando Ametrano, Luigi Ballabio, Adolfo Benin, Marco Marchioro
 *
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.sourceforge.net/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, contact ferdinando@ametrano.net
 *
 * QuantLib license is also available at http://quantlib.sourceforge.net/LICENSE.TXT
*/

/*! \file gaussianrandomgenerator.h
    \brief the best uniform random-number generator available in QuantLib

    $Source$
    $Name$
    $Log$
    Revision 1.1  2000/12/27 15:23:39  marmar
    Random number generators has been updated and documented.
    Now the Sample Generator idea is fully implemented

*/

#ifndef ql_gaussian_random_generator_h
#define ql_gaussian_random_generator_h

#include "qldefines.h"
#include "uniformrandomgenerator.h"
#include "boxmuller.h"

namespace QuantLib {

    namespace MonteCarlo {

    /*! The following is the default choice for the gaussian random number 
		generator. GaussianRandomGenerator presents the following interface

		\code
			GaussianRandomGenerator(long seed);	// the constructor
			typedef double SampleType;
			double next() const;		// returns the next random numer
			double weight() const;		// returns the weight of the last random numer
		\endcode
	*/
        typedef BoxMuller<UniformRandomGenerator> GaussianRandomGenerator;

    }

}

#endif
