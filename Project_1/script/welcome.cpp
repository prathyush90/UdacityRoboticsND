#include <gazebo/gazebo.hh>

namespace gazebo
{
  class StartUpWorld : public WorldPlugin
  {
    public: StartUpWorld() : WorldPlugin()
            {
              printf("Welcome to the startup World!!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(StartUpWorld)
}
