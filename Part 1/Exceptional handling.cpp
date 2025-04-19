class Demo {
public:
    int val;
    Demo(int x) : val(x) {}

    // Member operator+
    Demo operator+(int num) {
        return Demo(val + num);
    }

    // Friend function for int + object
    friend Demo operator+(int num, Demo obj) {
        return Demo(num + obj.val);
    }
};
