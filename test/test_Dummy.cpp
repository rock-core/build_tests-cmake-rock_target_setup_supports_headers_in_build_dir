#include <boost/test/unit_test.hpp>
#include <rock_target_setup_supports_headers_in_build_dir/Dummy.hpp>

using namespace rock_target_setup_supports_headers_in_build_dir;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock_target_setup_supports_headers_in_build_dir::DummyClass dummy;
    dummy.welcome();
}
