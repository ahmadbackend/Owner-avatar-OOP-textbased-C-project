#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"
#include "CandleStick.h"


class MerkelMain
{
    public:
        MerkelMain();
        /** Call this to start the sim */
        void init();
    private: 
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterAsk();
        void enterBid();
        void printWallet();
        void gotoNextTimeframe();
        int getUserOption();
        void processUserOption(int userOption);
        
        std::vector<CandleStick> Asks;
        std::vector<CandleStick> Bids;
        void addOrders(CandleStick order,OrderBookType type);
        /** function to take the vector of candles of different currencies find 
         * the last matching candle -> return it so its closing price can be used as opening 
         * price for next candle
        */
        CandleStick matchedCandle(std::vector<CandleStick> candles, std::string curren);
        std::string currentTime;
        void bulkMethodNeedRes();

//        OrderBook orderBook{"20200317.csv"};
	OrderBook orderBook{"20200601.csv"};
        Wallet wallet;

};
