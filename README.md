# Bird Simulator

## Birds
### Kalos
* Kalosian Fletchling
* Kalosian Rufflet

### Unova
* Unovan Fletchling
* Unovan Rufflet

## Activities
### Spring
* Migrating
* Looking for a mate
* Building its nest
* Defending its flock

### Summer
* Eating
* Battling a pokemon
* Tending its wounds
* Finding a mate
* Teaching its flock

### Fall
* Migrating
* Looking for a meal
* Laying an egg
* Getting injured

### Winter
* Finding a mate
* Laying an egg
* Getting caught
* Leaving its mate
* Migrating
* Succumbing to its wounds

## Design Patterns
### Abstract Factory Method Pattern
* RegionFactory : Defines the abstract createBird() method for creating birds specific to a region.
* RegionFactory.createBird() : Returns the birds in a specific region

* KalosRegionFactory : Implements the createBird() method to create KalosBirds
* RegionFactory.createBird() : calls KalosRegionFactory.createBird() to Return a vector of Kalosian birds

* UnovaRegionFactory : Implements the createBird() method to create Unova Birds
* RegionFactory.createBird() : calls UnovaRegionFactory.createBird() to Return a vector of Unovan birds

### Strategy Method Pattern
* SeasonActivity : Definies the abstract performActivity(string name) which performs the activities for that birds season
* SeasonActivity.performActivity() : calls SeasonActivity.performActivity() to display the birds activities.

* SeasonActivityWithNest : Definies the abstract performActivity(string name) which performs the activities for that birds season
* SeasonActivityWithNest() : Definies abstraction for constructor
* bird.performActivity() : calls SeasonActivity.performActivity() to display the birds activities.

* KalosianFletchlingSpring : Definies the abstract performActivity(string name) which performs the activities for that birds season
* KalosianFletchlingSpring() : calls constructor to set nestbuilder to KalosianFletchling nest.
* KalosianFletchling.performActivity() : calls KalosianFletchlingSpring.performActivity() to display the birds activities for Spring and builds nest.

* KalosianFletchlingSummer : Definies the abstract performActivity(string name) which performs the activities for that birds season
* KalosianFletchling.performActivity() : calls KalosianFletchlingSummer.performActivity() to display the birds activities for Summer.

* KalosianFletchlingFall : Definies the abstract performActivity(string name) which performs the activities for that birds season
* KalosianFletchling.performActivity() : calls KalosianFletchlingFall.performActivity() to display the birds activities for Fall.

* KalosianFletchlingWinter : Definies the abstract performActivity(string name) which performs the activities for that birds season
* KalosianFletchling.performActivity() : calls KalosianFletchlingWinter.performActivity() to display the birds activities for Winter.

* There are duplicate classes for KalosianRufflet, UnovanKalosianFletchling, and UnovanRufflet following the same format for all the same seasons.

### Builder Pattern
* NestBuilder : Holds construction process for the bird's nest. Calls methods to construct parts of the nest
* Nest.buildNest() : calls nest.addMaterials() for length of materials

* KalosianFletchlingNestBuilder : Calls nest.buildNest
* Nest.buildNest() : calls KalosianFletchling.addMaterials() specific for KalosianFletchlings nest

* RuffletNestBuilder : Creates Rufflets nest
* Nest.buildNest() : calls Rufflet.addMaterials() specific for Rufflet nest

* UnovanKalosianFletchlingNestBuilder : Creates UnovanKalosianFletchling nest
* Nest.buildNest() : calls UnovanKalosianFletchling.addMaterials() specific for UnovanKalosianFletchlings nest

* UnovanRuffletNestBuilder : Creates UnovanRufflet nest
* Nest.buildNest() : calls UnovanRufflet.addMaterials() specific for UnovanRufflet nest

* Nest : is the nest the builder makes with the materials
* Nest.printNest() : Displays the nest to the user



