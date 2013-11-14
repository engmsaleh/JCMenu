//
//  JCMenu.h
//  JC UI Composant
//

/*
 *
 * Copyright (c) 2013 Jean-Baptiste Castro (@jbaptistecastro)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#import <UIKit/UIKit.h>

@class JCMenuItem;

@interface JCMenu : UIView

- (id)initWithFrame:(CGRect)frame items:(NSArray*)items;

@property(nonatomic, copy)   NSArray *items;            // get/set visible JCMenuItem. Default is nil. Must contain object of type JCMenuItem
@property(nonatomic, assign) JCMenuItem *selectedItem;
@property(nonatomic, assign, getter = isExpand) BOOL expand;

// Appearance

@property(nonatomic, strong) UIColor *menuTintColor;    // By default blackColor.

@end
