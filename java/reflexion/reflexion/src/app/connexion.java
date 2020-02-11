package app;

public class connexion {
    enum con {
        mysql,
        sqlserver
    }

    public connexion() {
        // con.mysql =
        // con.sqlserver =
    }

    public <T> createDialect(en){
        if(en == "sqlserver")
            return new DialectSqlServer();
        if(en == "mysql")
            return new DialectMySql();
        }
    }