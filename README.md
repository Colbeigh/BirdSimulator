# Bird Simulator

## Birds
### Kalos
* Fletchling
* PikiPek

### Unova
* Rufflet
* Starly

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
### Factory Method Pattern
* RegionFactory : Defines the abstract createBird() method for creating birds specific to a region.
* RegionFactory.createBird() : Returns the birds in a specific region

* KalosRegionFactory : Implements the createBird() method to create KalosBirds
* RegionFactory.createBird() : calls KalosRegionFactory.createBird() to Return a vector of Unova birds

* UnovaRegionFactory : Implements the createBird() method to create Unova Birds
* RegionFactory.createBird() : calls UnovaRegionFactory.createBird() to Return a vector of Unova birds

### Strategy Method Pattern
* SeasonActivity : Definies the abstract performActivity(string name) which performs the activities for that birds season
* SeasonActivity.performActivity() : calls SeasonActivity.performActivity() to display the birds activities.

* SeasonActivityWithNest : Definies the abstract performActivity(string name) which performs the activities for that birds season
* SeasonActivityWithNest() : Definies abstraction for constructor
* bird.performActivity() : calls SeasonActivity.performActivity() to display the birds activities.

* FletchlingSpring : Definies the abstract performActivity(string name) which performs the activities for that birds season
* FletchlingSpring() : calls constructor to set nestbuilder to Fletchling nest.
* fletchling.performActivity() : calls FletchlingSpring.performActivity() to display the birds activities for Spring and builds nest.

* FletchlingSummer : Definies the abstract performActivity(string name) which performs the activities for that birds season
* fletchling.performActivity() : calls FletchlingSummer.performActivity() to display the birds activities for Summer.

* FletchlingFall : Definies the abstract performActivity(string name) which performs the activities for that birds season
* fletchling.performActivity() : calls FletchlingFall.performActivity() to display the birds activities for Fall.

* FletchlingWinter : Definies the abstract performActivity(string name) which performs the activities for that birds season
* fletchling.performActivity() : calls FletchlingWinter.performActivity() to display the birds activities for Winter.

* There are duplicate classes for Rufflet, PikiPek, and Starly following the same format for all the same seasons.

### Builder Pattern
* NestBuilder : Holds construction process for the bird's nest. Calls methods to construct parts of the nest
* Nest.buildNest() : calls nest.addMaterials() for length of materials

* FletchlingNestBuilder : Calls nest.buildNest
* Nest.buildNest() : calls Fletchling.addMaterials() specific for Fletchlings nest

* RuffletNestBuilder : Creates Rufflets nest
* Nest.buildNest() : calls Rufflet.addMaterials() specific for Rufflet nest

* PikiPekNestBuilder : Creates PikiPek nest
* Nest.buildNest() : calls PikiPek.addMaterials() specific for PikiPeks nest

* StarlyNestBuilder : Creates Starly nest
* Nest.buildNest() : calls Starly.addMaterials() specific for Starly nest

* Nest : is the nest the builder makes with the materials
* Nest.printNest() : Displays the nest to the user



