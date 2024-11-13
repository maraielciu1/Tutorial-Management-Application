//
// Created by Mara Ielciu on 13.11.2024.
//

#ifndef TUTORIAL_MANAGEMENT_APP_DBREPO_H
#define TUTORIAL_MANAGEMENT_APP_DBREPO_H

#include <sqlite3.h>
#include "Repo.h"

class DBRepo: public Repo {
private:
    sqlite3* dbWithTutorials;
    std::string dbName;
public:
    DBRepo(const std::string &dbname);
    virtual ~DBRepo();
    void readFromFile() override;
    void addRepo(const Tutorial& tutorial) override;
    void deleteRepo(const Tutorial& tutorial) override;
    void updateRepo(int position, const Tutorial& tutorial) override;
    void deleteRepoPosition(int position) override;
};


#endif //TUTORIAL_MANAGEMENT_APP_DBREPO_H
