
/*
 Copyright (C) 2004 StatPro Italia srl

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it under the
 terms of the QuantLib license.  You should have received a copy of the
 license along with this program; if not, please email quantlib-dev@lists.sf.net
 The license is also available online at http://quantlib.org/html/license.html

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

/*! \file asia.hpp
    \brief Asian currencies

    Data from http://fx.sauder.ubc.ca/currency_table.html
    and http://www.thefinancials.com/vortex/CurrencyFormats.html
*/

#ifndef quantlib_asian_currencies_hpp
#define quantlib_asian_currencies_hpp

#include <ql/currency.hpp>

namespace QuantLib {

    //! Bangladesh taka
    /*! The ISO three-letter code is BDT; the numeric code is 50.
        It is divided in 100 paisa.

        ingroup currencies
    */
    class BDTCurrency : public Currency {
      public:
        BDTCurrency() {
            static boost::shared_ptr<Data> bdtData(
                                        new Data("Bangladesh taka", "BDT", 50,
                                                 "Bt", "", 100,
                                                 Rounding(),
                                                 "%3% %1$.2f"));
            data_ = bdtData;
        }
    };

    //! Chinese yuan
    /*! The ISO three-letter code is CNY; the numeric code is 156.
        It is divided in 100 fen.

        ingroup currencies
    */
    class CNYCurrency : public Currency {
      public:
        CNYCurrency() {
            static boost::shared_ptr<Data> cnyData(
                                          new Data("Chinese yuan", "CNY", 156,
                                                   "Y", "", 100,
                                                   Rounding(),
                                                   "%3% %1$.2f"));
            data_ = cnyData;
        }
    };

    //! Honk Kong dollar
    /*! The ISO three-letter code is HKD; the numeric code is 344.
        It is divided in 100 cents.

        ingroup currencies
    */
    class HKDCurrency : public Currency {
      public:
        HKDCurrency() {
            static boost::shared_ptr<Data> hkdData(
                                      new Data("Honk Kong dollar", "HKD", 344,
                                               "HK$", "", 100,
                                               Rounding(),
                                               "%3% %1$.2f"));
            data_ = hkdData;
        }
    };

    //! Israeli shekel
    /*! The ISO three-letter code is ILS; the numeric code is 376.
        It is divided in 100 agorot.

        ingroup currencies
    */
    class ILSCurrency : public Currency {
      public:
        ILSCurrency() {
            static boost::shared_ptr<Data> ilsData(
                                        new Data("Israeli shekel", "ILS", 376,
                                                 "NIS", "", 100,
                                                 Rounding(),
                                                 "%1$.2f %3%"));
            data_ = ilsData;
        }
    };

    //! Indian rupee
    /*! The ISO three-letter code is INR; the numeric code is 356.
        It is divided in 100 paise.

        ingroup currencies
    */
    class INRCurrency : public Currency {
      public:
        INRCurrency() {
            static boost::shared_ptr<Data> inrData(
                                          new Data("Indian rupee", "INR", 356,
                                                   "Rs", "", 100,
                                                   Rounding(),
                                                   "%3% %1$.2f"));
            data_ = inrData;
        }
    };

    //! Iraqi dinar
    /*! The ISO three-letter code is IQD; the numeric code is 368.
        It is divided in 1000 fils.

        ingroup currencies
    */
    class IQDCurrency : public Currency {
      public:
        IQDCurrency() {
            static boost::shared_ptr<Data> iqdData(
                                           new Data("Iraqi dinar", "IQD", 368,
                                                    "ID", "", 1000,
                                                    Rounding(),
                                                    "%2% %1$.3f"));
            data_ = iqdData;
        }
    };

    //! Iranian rial
    /*! The ISO three-letter code is IRR; the numeric code is 364.
        It has no subdivisions.

        ingroup currencies
    */
    class IRRCurrency : public Currency {
      public:
        IRRCurrency() {
            static boost::shared_ptr<Data> irrData(
                                          new Data("Iranian rial", "IRR", 364,
                                                   "Rls", "", 1,
                                                   Rounding(),
                                                   "%3% %1$.2f"));
            data_ = irrData;
        }
    };

    //! Japanese yen
    /*! The ISO three-letter code is JPY; the numeric code is 392.
        It is divided into 100 sen.

        \ingroup currencies
    */
    class JPYCurrency : public Currency {
      public:
        JPYCurrency() {
            static boost::shared_ptr<Data> jpyData(
                                          new Data("Japanese yen", "JPY", 392,
                                                   "\xA5", "", 100,
                                                   Rounding(),
                                                   "%3% %1$.0f"));
            data_ = jpyData;
        }
    };

    //! South-Korean won
    /*! The ISO three-letter code is KRW; the numeric code is 410.
        It is divided in 100 chon.

        ingroup currencies
    */
    class KRWCurrency : public Currency {
      public:
        KRWCurrency() {
            static boost::shared_ptr<Data> krwData(
                                      new Data("South-Korean won", "KRW", 410,
                                               "W", "", 100,
                                               Rounding(),
                                               "%3% %1$.0f"));
            data_ = krwData;
        }
    };

    //! Kuwaiti dinar
    /*! The ISO three-letter code is KWD; the numeric code is 414.
        It is divided in 1000 fils.

        ingroup currencies
    */
    class KWDCurrency : public Currency {
      public:
        KWDCurrency() {
            static boost::shared_ptr<Data> kwdData(
                                         new Data("Kuwaiti dinar", "KWD", 414,
                                                  "KD", "", 1000,
                                                  Rounding(),
                                                  "%3% %1$.3f"));
            data_ = kwdData;
        }
    };

    //! Nepal rupee
    /*! The ISO three-letter code is NPR; the numeric code is 524.
        It is divided in 100 paise.

        ingroup currencies
    */
    class NPRCurrency : public Currency {
      public:
        NPRCurrency() {
            static boost::shared_ptr<Data> nprData(
                                           new Data("Nepal rupee", "NPR", 524,
                                                    "NRs", "", 100,
                                                    Rounding(),
                                                    "%3% %1$.2f"));
            data_ = nprData;
        }
    };

    //! Pakistani rupee
    /*! The ISO three-letter code is PKR; the numeric code is 586.
        It is divided in 100 paisa.

        ingroup currencies
    */
    class PKRCurrency : public Currency {
      public:
        PKRCurrency() {
            static boost::shared_ptr<Data> pkrData(
                                       new Data("Pakistani rupee", "PKR", 586,
                                                "Rs", "", 100,
                                                Rounding(),
                                                "%3% %1$.2f"));
            data_ = pkrData;
        }
    };

    //! Saudi riyal
    /*! The ISO three-letter code is SAR; the numeric code is 682.
        It is divided in 100 halalat.

        ingroup currencies
    */
    class SARCurrency : public Currency {
      public:
        SARCurrency() {
            static boost::shared_ptr<Data> sarData(
                                           new Data("Saudi riyal", "SAR", 682,
                                                    "SRls", "", 100,
                                                    Rounding(),
                                                    "%3% %1$.2f"));
            data_ = sarData;
        }
    };

    //! Singapore dollar
    /*! The ISO three-letter code is SGD; the numeric code is 702.
        It is divided in 100 cents.

        ingroup currencies
    */
    class SGDCurrency : public Currency {
      public:
        SGDCurrency() {
            static boost::shared_ptr<Data> sgdData(
                                      new Data("Singapore dollar", "SGD", 702,
                                               "S$", "", 100,
                                               Rounding(),
                                               "%3% %1$.2f"));
            data_ = sgdData;
        }
    };

    //! Thai baht
    /*! The ISO three-letter code is THB; the numeric code is 764.
        It is divided in 100 stang.

        ingroup currencies
    */
    class THBCurrency : public Currency {
      public:
        THBCurrency() {
            static boost::shared_ptr<Data> thbData(
                                             new Data("Thai baht", "THB", 764,
                                                      "Bht", "", 100,
                                                      Rounding(),
                                                      "%1$.2f %3%"));
            data_ = thbData;
        }
    };

    //! Taiwan dollar
    /*! The ISO three-letter code is TWD; the numeric code is 901.
        It is divided in 100 cents.

        ingroup currencies
    */
    class TWDCurrency : public Currency {
      public:
        TWDCurrency() {
            static boost::shared_ptr<Data> twdData(
                                         new Data("Taiwan dollar", "TWD", 901,
                                                  "NT$", "", 100,
                                                  Rounding(),
                                                  "%3% %1$.2f"));
            data_ = twdData;
        }
    };

}


#endif
