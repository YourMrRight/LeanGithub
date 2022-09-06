#include <gtest/gtest.h>
class footest : public ::testing::Test 
{
private:
    
public:
    footest(/* args */);
    ~footest();
protected:
    void SetUp()override;
    void TearDown()override;
};

footest::footest(/* args */)
{
}

footest::~footest()
{
}

void footest::SetUp()
{
    
}

void footest::TearDown()
{
    
}

TEST_F(FooTest, DoesXyz){
    EXPECT_EQ(1, 1);
}