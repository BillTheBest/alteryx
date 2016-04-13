// Copyright (c) CACI Ltd, 2016

#include "insdbcl.h"

void Main()
{
   // Connect to InSite Database
   CDbConnection connection;
   HRESULT hr = connection.Open(L"D:\Projects\Desktop\8x\Castleoak\User8\Databases\USER_DD.GB2");

   // Query InSite Database
   CDbQuery query( &connection );
   HRESULT hr = query.SetAttribute(...);
}
