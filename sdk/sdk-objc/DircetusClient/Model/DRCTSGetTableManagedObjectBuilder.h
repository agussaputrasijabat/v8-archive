#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "DRCTSGetTableDataManagedObjectBuilder.h"
#import "DRCTSGetTablesMetaManagedObjectBuilder.h"

#import "DRCTSGetTableManagedObject.h"
#import "DRCTSGetTable.h"

/**
* directus.io
* API for directus.io
*
* OpenAPI spec version: 1.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


@interface DRCTSGetTableManagedObjectBuilder : NSObject

@property (nonatomic, strong) DRCTSGetTablesMetaManagedObjectBuilder * metaBuilder;
@property (nonatomic, strong) DRCTSGetTableDataManagedObjectBuilder * dataBuilder;


-(DRCTSGetTableManagedObject*)createNewDRCTSGetTableManagedObjectInContext:(NSManagedObjectContext*)context;

-(DRCTSGetTableManagedObject*)DRCTSGetTableManagedObjectFromDRCTSGetTable:(DRCTSGetTable*)object context:(NSManagedObjectContext*)context;

-(void)updateDRCTSGetTableManagedObject:(DRCTSGetTableManagedObject*)object withDRCTSGetTable:(DRCTSGetTable*)object2;

-(DRCTSGetTable*)DRCTSGetTableFromDRCTSGetTableManagedObject:(DRCTSGetTableManagedObject*)obj;

-(void)updateDRCTSGetTable:(DRCTSGetTable*)object withDRCTSGetTableManagedObject:(DRCTSGetTableManagedObject*)object2;

@end